#include<stdio.h>
     struct circular{
        int data;
        struct circular *next;
    };
    struct circular* createNode(int data){
        struct circular* newNode=   (struct circular*)malloc(sizeof(struct circular));
        
        if(newNode==NULL){
            printf("Memory allocation failed");
        }
         newNode->data = data;
         newNode->next = NULL;
          return newNode;
    };
     void insertEnd(struct circular** head, int data){

        struct circular* newNode= createNode(data);
        if(*head==NULL){
            *head=newNode;
            newNode->next=*head;

        }
        else{
            struct circular* last=*head;
            while(last->next!=*head){
                last=last->next;
            }
            last->next=newNode;
            newNode->next=*head;
        }
     }
     void displayList(struct circular* head) {
    struct circular* current = head;
    if (head != NULL) {
        do {
            printf("%d ", current->data);
            current = current->next;
        } while (current != head);
        printf("\n");
    }
}

        

int main(){
    struct circular* head =NULL;
    int choice ,data;
    do {
        printf("\nCircular Linked List Operations:\n");
        printf("1. Insert at End\n");
        printf("2. Display\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                insertEnd(&head, data);
                break;
            case 2:
                printf("Circular Linked List: ");
                displayList(head);
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