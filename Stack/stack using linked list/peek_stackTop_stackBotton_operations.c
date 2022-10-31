#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
// here top is a global variable
struct Node *top = NULL;

void linkedListTraversal(struct Node *top)
{
    while (top != NULL)
    {
        printf("Element : %d\n", top->data);
        top = top->next;
    }
}

int isFull(struct Node *top)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    return 0;
}

struct Node *push(struct Node *top, int val)
{
    if (isFull(top))
    {
        printf("Stack Overflow! %d can not be pushed in the stack\n", val);
    }
    else
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = val;
        n->next = top;
        return n;
    }
}

int pop(struct Node *tp)
{
    if (isEmpty(tp))
    {
        printf("stack underflow! Element can not be popped from the stack\n");
    }
    else
    {
        struct Node *n = (tp);
        top = (tp)->next;
        int x = n->data;
        free(n);
        return x;
    }
}

int peek(int pos){
    struct Node * ptr = top;
    for (int i = 0; (i < pos-1 && ptr != NULL); i++)
    {
       ptr = ptr->next;
    }
    if(ptr != NULL){
    return ptr->data;
    }

    return -1;
}

int stackTop(){
    return top->data;
}

int stackBotton(){
    struct Node * ptr = top;
    while (ptr->next != NULL)
    {
       ptr = ptr->next;
    }
    
    return ptr->data;
}
int main()
{
    // Elements pushing in the stack
    top = push(top, 7);
    top = push(top, 28);
    top = push(top, 15);
    top = push(top, 68);

    linkedListTraversal(top);
    for (int i = 1; i <= 4; i++)
    {
        printf("The value at position %d is %d \n",  i, peek(i));
    }
    
        printf("The value at top most position in stack is %d\n", stackTop());

        printf("The value at botton most position in stack is %d\n", stackBotton());


    return 0;
}