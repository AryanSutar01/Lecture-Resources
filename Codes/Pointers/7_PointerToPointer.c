#include <stdio.h>

int main() {
    int value = 10;
    int *ptr = &value;       // Pointer to an integer
    int **ptrToPtr = &ptr;   // Pointer to a pointer

    printf("Value: %d\n", value);
    printf("Address of value: %p\n", (void*)&value);
    printf("Value using ptr: %d\n", *ptr);
    printf("Address of ptr: %p\n", (void*)&ptr);
    printf("Value using ptrToPtr: %d\n", **ptrToPtr);
    printf("Address of ptrToPtr: %p\n", (void*)&ptrToPtr);

    return 0;
}