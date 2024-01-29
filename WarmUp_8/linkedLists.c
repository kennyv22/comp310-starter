#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* head = NULL;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void push(int new_data) {
    Node* new_node = createNode(new_data);
    new_node->next = head;
    head = new_node;
}

void deleteNode(int key) {
    Node* temp = head, *prev = NULL;

    if (temp != NULL && temp->data == key) {
        head = temp->next;
        return;
    }

    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return;

    prev->next = temp->next;
}

void printList() {
    Node* tnode = head;
    while (tnode != NULL) {
        printf("%d ", tnode->data);
        tnode = tnode->next;
    }
}

int main(int argc, char *argv []) {
    push(7);
    push(1);
    push(3);
    push(2);

    printf("\nCreated Linked list is: ");
    printList();

    deleteNode(1);

    printf("\nLinked List after Deletion of 1: ");
    printList("");
    printf("\n");


    return 0;
}