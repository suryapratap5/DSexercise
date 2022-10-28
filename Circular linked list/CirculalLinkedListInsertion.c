#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        printf("Element : %d \n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

// Case 1 : Insertion at the start
struct Node *insertAtFirst(struct Node *head, int value)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    p->data = value;
    struct Node *q = head->next;
    while (q->next != head)
    {
        q = q->next;
    }

    p->next = q->next;
    q->next = p;
    return p;
}

int returnIndex(int items)
{
    printf("Please give index between 1 to %d\n", items);
    int index;
    scanf("%d", &index);
    if (index < 1 || index > items)
    {
        return returnIndex(items);
    }
    return index;
}
// Case 2 : Insertion at the given index or between two nodes
struct Node *insertAtIndex(struct Node *head, int index, int value)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    p->data = value;
    struct Node *q = head;
    for (int i = 0; i < index - 1; i++)
    {
        q = q->next;
    }
    p->next = q->next;
    q->next = p;
    return head;
}

// Case 3 : Insert at the end
void insertAtEnd(struct Node *head, int value){
    struct Node* p = (struct Node*) malloc(sizeof(struct Node));
    p->data = value;
    struct Node * q = head->next;
    while (q->next != head)
    {
        q = q->next;
    }

    p->next = q->next;
    q->next = p;
    
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
    head->data = 4;
    head->next = second;

    // Link second and third node
    second->data = 3;
    second->next = third;

    // Link third and fourth node
    third->data = 8;
    third->next = fourth;

    // Link fourth and head node
    fourth->data = 9;
    fourth->next = head;

    int items = 4;
    printf("Linked List before traversal\n");
    linkedListTraversal(head);

    // head = insertAtFirst(head, 56);

    // int index = returnIndex(items);
    // head = insertAtIndex(head, index, 78);

    insertAtEnd(head, 78);
    items += 1;

    printf("\nLinked List After traversal\n");
    linkedListTraversal(head);
    return 0;
}