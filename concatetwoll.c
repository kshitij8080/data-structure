#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void displayList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void concatenateLists(struct Node* list1, struct Node* list2) {
    if (list1 == NULL) {
        list1 = list2;
    } else {
        struct Node* current = list1;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = list2;
    }
}

void insertEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

int main() {
    struct Node* list1 = NULL;
    struct Node* list2 = NULL;

    int n, data;

    printf("Enter the number of elements for the first list: ");
    scanf("%d", &n);
    printf("Enter the elements for the first list:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        insertEnd(&list1, data);
    }

    printf("Enter the number of elements for the second list: ");
    scanf("%d", &n);
    printf("Enter the elements for the second list:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        insertEnd(&list2, data);
    }

    printf("List 1: ");
    displayList(list1);
    printf("List 2: ");
    displayList(list2);

    concatenateLists(list1, list2);

    printf("Concatenated List: ");
    displayList(list1);

    return 0;
}
