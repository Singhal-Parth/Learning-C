#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

typedef struct node Node;

Node *createNode(int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }

    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void display(Node *head)
{
    Node *temp = head;

    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void insertAtBeginning(Node **head, int value)
{
    Node *newNode = createNode(value);
    newNode->next = *head;
    *head = newNode;
    printf("Inserted %d at the beginning.\n", value);
}

void insertAtEnd(Node **head, int value)
{
    Node *newNode = createNode(value);

    if (*head == NULL) {
        *head = newNode;
        printf("Inserted %d at the end (list was empty).\n", value);
        return;
    }

    Node *temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = newNode;
    printf("Inserted %d at the end.\n", value);
}

void insertAtPosition(Node **head, int position, int value)
{
    if (position < 1) {
        printf("Invalid position. Position must be >= 1.\n");
        return;
    }

    if (position == 1) {
        insertAtBeginning(head, value);
        return;
    }

    Node *newNode = createNode(value);
    Node *temp = *head;
    int currentPos = 1;

    while (temp != NULL && currentPos < position - 1) {
        temp = temp->next;
        currentPos++;
    }

    if (temp == NULL) {
        printf("Position %d is out of range. Inserting at the end.\n", position);
        insertAtEnd(head, value);
        free(newNode);
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    printf("Inserted %d at position %d.\n", value, position);
}

void deleteFromBeginning(Node **head)
{
    if (*head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    Node *temp = *head;
    *head = (*head)->next;
    free(temp);
    printf("Deleted the first node.\n");
}

void deleteFromEnd(Node **head)
{
    if (*head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
        printf("Deleted the only node.\n");
        return;
    }

    Node *temp = *head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;
    printf("Deleted the last node.\n");
}

void deleteFromPosition(Node **head, int position)
{
    if (*head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    if (position < 1) {
        printf("Invalid position. Position must be >= 1.\n");
        return;
    }

    if (position == 1) {
        deleteFromBeginning(head);
        return;
    }

    Node *temp = *head;
    int currentPos = 1;

    while (temp != NULL && currentPos < position - 1) {
        temp = temp->next;
        currentPos++;
    }

    if (temp == NULL || temp->next == NULL) {
        printf("Position %d is out of range. Cannot delete.\n", position);
        return;
    }

    Node *deleteNode = temp->next;
    temp->next = deleteNode->next;
    free(deleteNode);
    printf("Deleted node at position %d.\n", position);
}

int main()
{
    Node *head = NULL;

    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);
    display(head);

    insertAtBeginning(&head, 5);
    display(head);

    insertAtPosition(&head, 3, 15);
    display(head);

    deleteFromBeginning(&head);
    display(head);

    deleteFromPosition(&head, 3);
    display(head);

    deleteFromEnd(&head);
    display(head);

    return 0;
}
