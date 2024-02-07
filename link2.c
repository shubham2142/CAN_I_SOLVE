#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void countFrequency(struct Node* head) {
    struct Node* current = head;
    int frequency[100] = {0}; // Assuming the elements in the linked list are integers

    while (current != NULL) {
        frequency[current->data]++;
        current = current->next;
    }

    printf("Frequency of elements in the linked list:\n");
    current = head;
    while (current != NULL) {
        if (frequency[current->data] > 0) {
            printf("%d: %d\n", current->data, frequency[current->data]);
            frequency[current->data] = 0; // Avoid printing multiple entries
        }
        current = current->next;
    }
}

int main() {

    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));
    struct Node* fourth = (struct Node*)malloc(sizeof(struct Node));
    struct Node* fifth = (struct Node*)malloc(sizeof(struct Node));
    struct Node* sixth = (struct Node*)malloc(sizeof(struct Node));
    struct Node* seventh = (struct Node*)malloc(sizeof(struct Node));
    struct Node* eight = (struct Node*)malloc(sizeof(struct Node));

    head->data = 20;
    head->next = second;

    second->data = 18;
    second->next = third;

    third->data = 15;
    third->next = fourth;

    fourth->data = 20;
    fourth->next = fifth;

    fifth->data = 6;
    fifth->next = sixth;

    sixth->data = 18;
    sixth->next = seventh;

    seventh->data = 5;
    seventh->next = eight;

    eight->data = 18;
    eight->next = NULL;

    countFrequency(head);

    return 0;
}