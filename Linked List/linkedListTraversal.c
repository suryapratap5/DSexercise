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

    likedListTraversal(head);

    return 0;
}