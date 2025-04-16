#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory using calloc
    arr = (int *)calloc(n, sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Initialized array elements:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]); 
    }
    printf("\n");

    free(arr);

    return 0;
}