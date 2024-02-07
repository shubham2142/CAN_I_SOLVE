#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head;
void insertbeginning(){
    struct node *ptr;
    int item;
    ptr=(struct node *)malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("\nOverflow");
    }
    else{
      printf("Enter value\n");
      scanf("%d",&item);
    ptr->data=item;
    ptr->next=head;
    head=ptr;
    printf("\nNode inserted\n");
    }
}
void display(){
    struct node *ptr;
    ptr=head;
    if(ptr==NULL){
        printf("\n Nothing to delete");
    }
    else{
        printf("Printing values\n");
        while(ptr!=NULL){
        printf("%d \n",ptr->data);
        ptr=ptr->next;
    }
    }
}
void main(){

    int choice;
    while(choice!=2){
        printf("1- for insert neginning 2- for display 3- exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
             insertbeginning();
            break;
         case 2:
             display();
             break;
         case 3:
               exit(0);    
        
        default:
            break;
        }
    }
}