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

int search(Node *list, int value);

Node *swap(Node *list, int idx1, int idx2);

Node *deletePos(Node *list, int pos);

 

int main()

{

 

    Node *head = NULL;

    int choice, num, pos, result, idx1, idx2;

 

    printf("Create the Linked List :\n");

    head = createList(head);

    displayList(head);

 

    do

    {

        printf("\n--------- Menu Bar ---------\n");

        printf("1. Search the Number in Linked List : \n");

        printf("2. Swap mth and nth element : \n");

        printf("3. delete node from specific position : \n");

        printf("4. Exit \n");

        printf("--------- End -------------- \n");

 

        printf("Enter your choice : \n");

        scanf("%d", &choice);

 

        switch (choice)

        {

        case 1:

            printf("Enter the search value :\n");

            scanf("%d", &num);

            result = search(head, num);

            if (result < 0)

            {

                printf("The element is not found !!\n");

            }

            else

            {

                printf("The element is found at %d index !!\n", result);

            }

            break;

        case 2:

            printf("Enter the first index : \n");

            scanf("%d", &idx1);

            printf("Enter the second index : \n");

            scanf("%d", &idx2);

            head = swap(head, idx1, idx2);

            displayList(head);

            break;

        case 3:

            printf("Enter the position : \n");

            scanf("%d", &pos);

            head = deletePos(head, pos);

            printf("After Delete element linked lins is : \n");

            displayList(head);

            break;

        case 4:

            exit(0);

            break;

        default:

            printf("Wrong choice \n");

            break;

        }

 

    } while (choice != 4);

 

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

    if (list == NULL)

    {

        printf("List is Empty !! \n");

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

 

int search(Node *list, int value)

 

{

    Node *temp = list;

    int i = 0;

 

    while (temp != NULL)

    {

        if (temp->data == value)

        {

            return i;

        }

 

        temp = temp->next;

        i++;

    }

 

    return -1;

}

 

Node *swap(Node *list, int idx1, int idx2)

{

    Node *temp1 = list, *temp2 = list;

    int i, j, data;

 

    i = 1;

    while (temp1 != NULL && i <= idx1 - 1)

    {

 

        temp1 = temp1->next;

        i++;

    }

 

    j = 1;

    while (temp2 != NULL && j <= idx2 - 1)

    {

 

        temp2 = temp2->next;

        j++;

    }

 

    if (temp1 == NULL || temp2 == NULL)

    {

        printf("You entered index is out of range !! \n");

    }

    else

    {

        data = temp2->data;

        temp2->data = temp1->data;

        temp1->data = data;

    }

 

    return list;

}

 

Node *deletePos(Node *list, int pos)

{

    Node *temp = list, *temp2 = list;

    int i = 1;

 

    while (temp != NULL && i < pos - 1)

    {

        temp = temp->next;

        i++;

    }

 

    i = 1;

    while (temp2 != NULL && i < pos)

    {

        temp2 = temp2->next;

        i++;

    }

 

    temp->next = temp2->next;

    free(temp2);

 

    return list;

}