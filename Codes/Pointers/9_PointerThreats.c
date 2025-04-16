#include <stdio.h>
#include <stdlib.h>

void danglingPointerExample() {
    int *ptr = (int *)malloc(sizeof(int)); // Dynamically allocate memory
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return;
    }

    *ptr = 42; // Assign a value
    printf("Value before freeing memory: %d\n", *ptr);

    free(ptr); // Free the allocated memory
    // Now 'ptr' is a dangling pointer
    printf("Accessing dangling pointer: %d (undefined behavior)\n", *ptr); // Undefined behavior
}

void nullPointerDereference() {
    int *ptr = NULL; // Null pointer
    // Dereferencing a null pointer causes a crash
    printf("Dereferencing null pointer: %d (undefined behavior)\n", *ptr);
}

void uninitializedPointer() {
    int *ptr; // Uninitialized pointer
    // Dereferencing an uninitialized pointer causes undefined behavior
    printf("Dereferencing uninitialized pointer: %d (undefined behavior)\n", *ptr);
}

int main() {
    printf("Demonstrating dangling pointer:\n");
    danglingPointerExample();

    printf("\nDemonstrating null pointer dereference:\n");
    nullPointerDereference();

    printf("\nDemonstrating uninitialized pointer:\n");
    uninitializedPointer();

    return 0;
}