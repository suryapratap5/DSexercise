#include <stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void likedListTraversal(struct Node *ptr)
{

    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// case - 1:  Linked list insertion at the beggining
struct Node * insertAtStart(struct Node* head, int data){
    struct Node * ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;

    return ptr;
}

// case - 2:  Linked list insertion between two node or given position
void insertAtBetween(struct Node* head, int data, int position){
    struct Node * ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node* p = head;
    int i = 0;

    while (i < (position-1))
    {
        p = p->next;
        i++;
    }
    
    ptr->next = p->next;
    p->next = ptr;

}
// case - 3:  Linked list insertion at the end 
void insertAtEnd(struct Node* head, int data){
    struct Node * ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node* p = head;

    while (p->next != NULL)
    {
        p = p->next; 
    }

    p->next = ptr;
    ptr->next = NULL;
    
}

// case - 4:  Linked list insertion at the end 
void insertAfterNode(struct Node* preNode, int data){
    struct Node * ptr = (struct Node*) malloc(sizeof(struct Node));
    ptr->data = data;
   
   ptr->next = preNode->next;
   preNode->next = ptr;
    
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link head and second node
    head->data = 23;
    head->next = second;

    // Link second and third node
    second->data = 35;
    second->next = third;

    // Link third and fourth node
    third->data = 47;
    third->next = fourth;

    // Terminate the list at the fourth node
    fourth->data = 87;
    fourth->next = NULL;

    printf("Linked list before insertion\n");
    likedListTraversal(head);

    // head = insertAtStart(head, 56);
    // insertAtBetween(head, 56, 1);
    // insertAtEnd(head, 56);
    insertAfterNode(third, 56);

    printf("\nLinked list After insertion\n");
    likedListTraversal(head);

    return 0;
}