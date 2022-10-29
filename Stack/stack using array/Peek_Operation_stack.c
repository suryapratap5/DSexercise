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
        printf("\nStack Overflow! %d can not be push in the stack\n\n", val);
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

int peek(struct stack * ptr, int i){
    int arrayInd = ptr->top - i + 1;
    if(arrayInd < 0 || arrayInd > ptr->top){
        printf("Given stack position is invalid\n");
        return -1;
    }else{
        return ptr->arr[arrayInd];
    }
}

int main(){
    struct stack * sp = (struct stack*) malloc(sizeof(struct stack));
    sp->size = 11;
    sp->top = -1;
    sp->arr = (int*) malloc(sp->size * sizeof(int));
    printf("Stack successfully created\n");

    printf("before push operatons : Stack Empty : %d \n", isEmpty(sp));
    printf("before pop operatons : Stack Full : %d \n", isFull(sp));

    push(sp, 1);
    push(sp, 75);
    push(sp, 95);
    push(sp, 5);
    push(sp, 12);
    push(sp, 9);
    push(sp, 31);
    push(sp, 7);
    push(sp, 29);
    push(sp, 23);  
    push(sp, 55);  // stack is overflow now
    push(sp, 13);   // 13 cannot be pushed in the stack because stack is overflow
   
//    pop(sp);
//    pop(sp);
    
    printf("before push operatons : Stack Empty : %d \n", isEmpty(sp));
    printf("before pop operatons : Stack Full : %d \n", isFull(sp));

    for (int i = 1; i <= sp->top + 1; i++)
    {
        printf("The value of position %d is %d\n", i, peek(sp, i));
    }
    
    return 0;
}