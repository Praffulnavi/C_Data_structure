//insert at end of the array
#include<stdio.h>
#define CAP 10
int main(){
    int arr[]={1,2,3,4};
    int n = 4;
    int val = 20;
    if(n<CAP){
        arr[n] = val;
        n++;
    }
    else{
        printf("Array is full\n");
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
output:
1 2 3 4 20
