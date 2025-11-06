#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* next;
};
struct node* head = NULL;
void insertbegin(int value){
struct node* newNode = malloc(sizeof(struct node));
newNode->data = value;
newNode->next = head;
head = newNode;
}
void display(){
    struct node* temp = head;
    while(temp!= NULL){
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
int main(){
    insertbegin(10);
    insertbegin(20);
    insertbegin(30);
    insertbegin(40);
    display();
}
output:
40 -> 30 -> 20 -> 10 -> NULL
