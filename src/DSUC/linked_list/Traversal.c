#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

typedef struct node node_ll;

void traversal(node_ll *head)
{
    node_ll *temp = head;

    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    node_ll *n1, *n2, *n3, *n4, *n5;
    node_ll *head;

    n1 = (node_ll *)malloc(sizeof(node_ll));
    n2 = (node_ll *)malloc(sizeof(node_ll));
    n3 = (node_ll *)malloc(sizeof(node_ll));
    n4 = (node_ll *)malloc(sizeof(node_ll));
    n5 = (node_ll *)malloc(sizeof(node_ll));

    n1->data = 10;
    n2->data = 20;
    n3->data = 30;
    n4->data = 40;
    n5->data = 50;

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = NULL;

    head = n1;

    traversal(head);

    return 0;
}