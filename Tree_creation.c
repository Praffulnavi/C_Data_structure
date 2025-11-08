#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node* L;
    struct node* R;
};
int main(){
    struct node* root = malloc(sizeof(struct node));
    struct node* Lchild = malloc(sizeof(struct node));
    struct node* Rchild = malloc(sizeof(struct node));
    root->data = 1;
    Lchild->data = 2;
    Rchild->data = 3;
    root->L= Lchild;
    root->R=Rchild;
    Lchild->L = Lchild->R =NULL;
    Rchild->L = Rchild->R =NULL;
    printf("Root:%d\n",root->data);
    printf("Left child:%d\n",root->L->data);
    printf("Right child:%d\n",root->R->data);
    return 0;
}
