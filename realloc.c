#include <stdio.h>
#include <stdlib.h>
int main() {
    int *arr, n = 3;
    arr = (int*)malloc(n * sizeof(int)); 
    for (int i = 0; i < n; i++)
        arr[i] = i + 1;

    n = 5;
    arr = (int*)realloc(arr, n * sizeof(int));
    arr[3] = 4;
    arr[4] = 5;
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    free(arr);
    return 0;
}
output:
1 2 3 4 5 
