#include <stdio.h>
#include <stdlib.h>

typedef struct Node_ll{
    int data;
    struct Node_ll next*;
};

void transveral( Node_ll *head)
{
    Node_ll *temp = head;

    while (temp != NULL)
    {
        printf("%d", temp -> data);
        temp = temp -> next;
    }
    
}

Node_ll ll_delete_int 

int main()
{
    Node_ll *n1, *n2, *n3 , *n4 , *n5;


    n1 = (node_ll *)malloc(sizeof(node_ll));
    n2 = (node_ll *)malloc(sizeof(node_ll));
    n3 = (node_ll *)malloc(sizeof(node_ll));
    n4 = (node_ll *)malloc(sizeof(node_ll));
    n5 = (node_ll *)malloc(sizeof(node_ll));


    n1 -> next = n2;
    n1 -> data = 12;

    n2 -> next = n3;
    n2 -> data = 15

    n3 -> next = n4;
    n3 -> data = 34

    n4 -> next = n5;
    n4 -> data = 45

    n5 -> next = NULL;
    n5 -> data = 56


    head = n1;

    transveral(head);

    return 0;

}