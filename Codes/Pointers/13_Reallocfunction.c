#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int*)malloc(3 * sizeof(int)); 
    arr[0] = 1;
    arr[1] = 2; 
    arr[2] = 3;

    int *new_arr = (int*)realloc(arr, 5 * sizeof(int));
    if (new_arr == NULL) {
        printf("Reallocation failed!\n");
        free(arr); 
        return 1;
    }
    arr = new_arr;  

    arr[3] = 4; 
    arr[4] = 5;

    free(arr);
    return 0;
}