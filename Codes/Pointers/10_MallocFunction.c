#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Allocate memory for n integers using malloc
    arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("The entered integers are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}