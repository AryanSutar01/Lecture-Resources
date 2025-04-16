#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 3, cols = 4;
    int *matrix = (int*)calloc(rows * cols, sizeof(int));  

    if (matrix == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Matrix[2][3] = %d\n", matrix[2 * cols + 3]);  

    free(matrix);
    return 0;
}