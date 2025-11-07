#include<stdio.h>
#define max 5
int stack[max];
int top = -1;
void push(int value){
    if(top == max-1)
    printf("stack overflow");
    else
    stack[++top]=value;
}
void pop(){
    if(top == -1)
    printf("stack underflow");
    else 
    printf("\n%d popped\n",stack[top]);
    top--;
}
void peek(){
    if(top == -1)
    printf("stack underflow");
    else 
    printf("\ntop:%d",stack[top]);
}
void display(){
    if(top == -1)
    printf("stack underflow");
    else 
    printf("stack elements:\n");
    for(int i=top;i>=0;i--)
    printf("%d ",stack[i]);
}
int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    display();
    pop();
    display();
    pop();
    display();
    peek();
    return 0;
}
