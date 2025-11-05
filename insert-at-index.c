//insertion at index
#include <stdio.h>
int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;  
    int index = 2;
    int value = 25;
    for (int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
    n++; 
    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
output:
10 20 25 30 40 50
