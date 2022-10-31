#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node* next;
};

void linkedListTraversal(struct Node * top){
    while (top!=NULL)
    {
        printf("Element : %d\n", top->data);
        top = top->next;
    }
    
}

int isFull(struct Node* top){
    struct Node* n = (struct Node*) malloc(sizeof(struct Node));
    if(n == NULL){
        return 1;
    }
    return 0;
}

int isEmpty(struct Node * top){
    if(top == NULL){
        return 1;
    }
    return 0;
}

struct Node * push(struct Node* top, int val){
    if(isFull(top)){
        printf("Stack Overflow! %d can not be pushed in the stack\n", val);
    }else{
        struct Node * n = (struct Node*) malloc(sizeof(struct Node));
        n->data = val;
        n->next = top;
        return n;
    }
}

int pop(struct Node** top){
    if(isEmpty(*top)){
        printf("stack underflow! Element can not be popped from the stack\n");
    }else{
        struct Node *n = (*top);
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}


int main(){
    struct Node * top = NULL;

    // Elements pushing in the stack
    top = push(top, 4);
    top = push(top, 3);
    top = push(top, 43);

    linkedListTraversal(top);

    // element pop form the stack
    int element = pop(&top);
    //  element = pop(&top);
    printf("Element %d is popped from the stack\n", element);

    return 0;
}