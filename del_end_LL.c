#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* head = NULL;
void insertEnd(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }
    struct Node* temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
}
void deleteEnd() {
    if (head == NULL) {
        printf("List is empty, nothing to delete.\n");
        return;
    }
    if (head->next == NULL) {
        printf("Deleted node with value: %d\n", head->data);
        free(head);
        head = NULL;
        return;
    }
    struct Node* temp = head;
    struct Node* prev = NULL;

    while (temp->next != NULL) {
        prev = temp;
        temp = temp->next;
    }
    printf("Deleted node with value: %d\n", temp->data);
    free(temp);
    prev->next = NULL;
}
void display() {
    struct Node* temp = head;
    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main() {
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    printf("Initial Linked List:\n");
    display();
    printf("\nDeleting node at end...\n");
    deleteEnd();
    display();
    printf("\nDeleting node at end again...\n");
    deleteEnd();
    display();
    return 0;
}
output:
Initial Linked List:
10 -> 20 -> 30 -> 40 -> NULL

Deleting node at end...
Deleted node with value: 40
10 -> 20 -> 30 -> NULL

Deleting node at end again...
Deleted node with value: 30
10 -> 20 -> NULL


