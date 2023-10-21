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

Node *interSection(Node *list1, Node *list2);

Node *insert(Node *list, int data);

 

int main()

{

    Node *list1 = NULL, *list2 = NULL, *list3 = NULL;

 

    list1 = createList(list1);

    displayList(list1);

 

    printf("\nEnter data into list 2 : \n");

    list2 = createList(list2);

    displayList(list2);

 

    printf("\n Intersection of two linked list \n");

    list3 = interSection(list1, list2);

    displayList(list3);

 

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

 

Node *interSection(Node *list1, Node *list2)

{

    Node *temp1 = list1;

    Node *list3 = NULL;

    Node *temp2 = list2;

 

    while (temp1 != NULL)

    {

        while (temp2 != NULL)

        {

            if (temp1->data == temp2->data)

            {

                list3 = insert(list3, temp1->data);

                break;

            }

            temp2 = temp2->next;

        }

 

        temp1 = temp1->next;

    }

 

    return list3;

}

 

Node *insert(Node *list, int num)

{

    Node *new_node = (Node *)malloc(sizeof(Node));

    new_node->data = num;

    new_node->next = NULL;

 

    if (list == NULL)

    {

        list = new_node;

    }

    else

    {

        Node *temp = list;

        while (temp->next != NULL)

        {

            temp = temp->next;

        }

        temp->next = new_node;

    }

 

    return list;

}