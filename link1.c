#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    char data;
    struct Node* next;
};

void reverse(struct Node** head_ref) {
    struct Node* prev = NULL;
    struct Node* current = *head_ref;
    struct Node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head_ref = prev;
}


bool compareLists(struct Node* head1, struct Node* head2) {
    struct Node* temp1 = head1;
    struct Node* temp2 = head2;

    while (temp1 && temp2) {
        if (temp1->data == temp2->data) {
            temp1 = temp1->next;
            temp2 = temp2->next;
        } else {
            return false;
        }
    }

    if (temp1 == NULL && temp2 == NULL) {
        return true;
    }

    // If one list is empty and the other is not, they are not palindrome
    return false;
}

bool isPalindrome(struct Node* head) {
    // Initialize two pointers to traverse the linked list
    struct Node *slow_ptr = head, *fast_ptr = head;
    struct Node *prev_slow_ptr = head;
    struct Node* mid_node = NULL; // To handle odd length linked list

    bool isPalindrome = true;

    if (head != NULL && head->next != NULL) {
        // Move fast_ptr to the end of the list and slow_ptr to the middle
        while (fast_ptr != NULL && fast_ptr->next != NULL) {
            fast_ptr = fast_ptr->next->next;
            prev_slow_ptr = slow_ptr;
            slow_ptr = slow_ptr->next;
        }

        if (fast_ptr != NULL) {
            mid_node = slow_ptr;
            slow_ptr = slow_ptr->next;
        }

        struct Node* second_half = slow_ptr;
        prev_slow_ptr->next = NULL; 
        reverse(&second_half);
        isPalindrome = compareLists(head, second_half);
        reverse(&second_half);

        if (mid_node != NULL) {
            prev_slow_ptr->next = mid_node;
            mid_node->next = second_half;
        } else {
            prev_slow_ptr->next = second_half;
        }
    }

    return isPalindrome;
}


void push(struct Node** head_ref, char new_data) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}


void printList(struct Node* node) {
    while (node != NULL) {
        printf("%c ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;
    
    push(&head, 'r');
    push(&head, 'a');
    push(&head, 'd');
    push(&head, 'a');
    push(&head, 'r');

    printf("Linked list: ");
    printList(head);

    if (isPalindrome(head)) {
        printf("The linked list is a palindrome.\n");
    } else {
        printf("The linked list is not a palindrome.\n");
    }

    return 0;
}