#include<bits/stdc++.h>
using namespace std;
#define N 10
struct Stack{
    int arr[N];
    int top;
};
void initialize(struct Stack* st) {
    st->top = -1;
}
bool isempty(struct Stack* st){
    return st->top==-1;
}
void push(struct Stack* st, int value){
    if(st->top==N-1){
        cout<<"stack is full"<<endl;
    }
    else{
        st->top++;
        st->arr[st->top]=value;

    }
}
void pop(struct Stack* st){
    if(isempty(st)){
        cout<<"stack is empty"<<endl;
    }
    else{
        cout<<st->arr[st->top]<<endl;
        st->top--;
    }
}
void peek(struct Stack* st){
    if(isempty(st)){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<st->arr[st->top]<<endl;
    }
}
void display(struct Stack* st){
   if(isempty(st)){
        cout<<"Stack is empty"<<endl;
    }
    else{
        for (int i = 0; i <=st->top; i++)
        {
            cout<<st->arr[st->top-i]<<" ";
        }
        cout<<endl;
        
    }
}


int main(){
    struct Stack st;
    int choice,value;
     initialize(&st);
    do{
        cout<<"Enter 1-push 2-pop 3-peek 4-isempty 5-display 6-exit"<<endl;
        cin>>choice;
        switch (choice)
        {
        case 1:
              cout<<"Enter value to push"<<endl;
              cin>>value;
             push(&st, value);
            break;
        case 2:
                pop(&st);
                break;
        case 3:
              peek(&st);
              break;            
        case 4:
              if(isempty(&st)){
                cout<<"Empty stack"<<endl;
              }
              else{
                cout<<"Not Empty"<<endl;
              }
              break;
         case 5: display(&st);
                break;
         case 6:
                    break;           
        default:
                cout<<"Enter valid number"<<endl;
            break;
        }
    }
        while (choice!=6);
     
        return 0;  
    }



  
