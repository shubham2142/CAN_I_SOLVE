#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtEnd(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

int findMiddleElement(struct Node* head) {
    struct Node* slowPtr = head;
    struct Node* fastPtr = head;

    if (head != NULL) {
        while (fastPtr != NULL && fastPtr->next != NULL) {
            fastPtr = fastPtr->next->next;
            slowPtr = slowPtr->next;
        }
        return slowPtr->data;
    }
    return -1; 
}

int main() {
    struct Node* head = NULL;

    // insertAtEnd(&head, 5);
    // insertAtEnd(&head, 7);
    // insertAtEnd(&head, 17);
    // insertAtEnd(&head, 13);
    // insertAtEnd(&head, 11);


    // int middleElement = findMiddleElement(head);

    // printf("Middle element: %d\n", middleElement);
      
    int choice ,data;
    do {
        printf("\nLinked List Operations:\n");
        printf("1. Insert at End\n");
        printf("2. finding middle value\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                insertAtEnd(&head, data);
                break;
            case 2:
                printf("finding middle element: ");
                int k=findMiddleElement(head);
                printf("%d \n",k);
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option \n");
        }
    } while (choice != 0);

    return 0;
}