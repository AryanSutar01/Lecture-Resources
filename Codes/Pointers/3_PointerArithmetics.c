#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // Pointer to the first element of the array

    printf("Pointer Arithmetic Demonstration:\n\n");

    // Accessing array elements using pointer
    printf("Accessing elements using pointer:\n");
    for (int i = 0; i < 5; i++) {
        printf("*(ptr + %d) = %d\n", i, *(ptr + i));
    }

    // Incrementing pointer
    printf("\nIncrementing pointer:\n");
    printf("Initial address: %p, Value: %d\n", (void *)ptr, *ptr);
    ptr++;
    printf("After increment: %p, Value: %d\n", (void *)ptr, *ptr);

    // Decrementing pointer
    printf("\nDecrementing pointer:\n");
    ptr--;
    printf("After decrement: %p, Value: %d\n", (void *)ptr, *ptr);

    // Pointer comparison
    printf("\nPointer comparison:\n");
    int *endPtr = &arr[4];
    printf("Start pointer: %p, End pointer: %p\n", (void *)ptr, (void *)endPtr);
    if (ptr < endPtr) {
        printf("Pointer ptr is before endPtr.\n");
    }

    // Difference between pointers
    printf("\nDifference between pointers:\n");
    int diff = endPtr - ptr;
    printf("Difference (endPtr - ptr): %d\n", diff);

    return 0;
}