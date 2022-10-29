#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack * ptr){
    if(ptr->top == -1){
        return 1;
    }
    return 0;
}

int isFull(struct stack * ptr){

    if(ptr->top == ptr->size - 1){
        return 1;
    }else{
        return 0;
    }
}

void push(struct stack* ptr, int val){
    if(isFull(ptr)){
        printf("\nStack Overflow! %d can not be pushed in the stack\n\n", val);
    }else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

void pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("\nStack Underflow! Items cannot be popped from the stack\n\n");
    }else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        printf("%d has popped from the stack\n", val);
        
    }
}

int stackTop(struct stack * ptr){
    return ptr->arr[ptr->top];
}

int stackBotton(struct stack * ptr){
    return ptr->arr[0];
}

int main(){
    struct stack * sp = (struct stack*) malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int*) malloc(sp->size * sizeof(int));
    printf("Stack successfully created\n");

    // Pushing the elements in the stack
    push(sp, 1);
    push(sp, 75);
    push(sp, 95);
    push(sp, 5);
    push(sp, 12);
    push(sp, 9);
    push(sp, 31);
    push(sp, 7);
    push(sp, 29);
    push(sp, 23);  // stack is overflow now
    push(sp, 13);   // 13 cannot be pushed in the stack because stack is overflow
   
 
    printf("stack Top most element is %d\n", stackTop(sp));
    printf("stack botton most element is %d\n", stackBotton(sp));
    return 0;
}