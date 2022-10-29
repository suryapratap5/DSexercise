#include<stdio.h>
#include<stdlib.h>

struct stack
{
    
    int size;
    int top;
    int * arr;
};

int isEmpty(struct stack *ptr){
    if(ptr->top == -1){
        return 1;
    }
    return 0;
}

int isFull(struct stack * ptr){
    if(ptr->top == ptr->size - 1){
        return 1;
    }
    return 0;
}


int main(){
    // struct stack S;
    // S.size = 80;
    // S.top = -1;
    // S.arr = (int *) malloc(S.size * sizeof(int));

    struct stack *S = (struct stack *) malloc(sizeof(struct stack));
    S->size = 80;
    S->top = -1;
    S->arr = (int *)malloc(S->size * sizeof(int));

    // S->arr[0] =23;
    // S->top++;
    // check if stack is empty

    if(isEmpty(S)){
        printf("Stack is empty\n");
    }else{
        printf("Stack is not empty\n");
    }

    // check if stack is full or not
    if(isFull(S)){
        printf("Stack is full\n");
    }else{
        printf("Stack is not empty\n");
    }

    return 0;
}
