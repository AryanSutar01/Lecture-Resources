#include <stdio.h>
int main() {
    // Guests (variables) check into rooms
    int x = 10;       // Guest "x" in Room 101
    int y = 20;       // Guest "y" in Room 102
    int arr[2] = {30, 40};  // Guests in Rooms 103-104

    // Keys (pointers) are created
    int *key1 = &x;    // Key1 points to Room 101
    int *key2 = &arr[0]; // Key2 points to Room 103
    int **master_key = &key1; // Master key points to key1's location

    // Let's use the keys!
    printf("Guest in Room 101: %d\n", *key1);  // Output: 10
    printf("Guest in Room 103: %d\n", *key2);  // Output: 30

    // Move key2 to the next room (pointer arithmetic)
    key2++;  
    printf("Now key2 opens Room 104: %d\n", *key2); // Output: 40

    // Master key fetches key1, then opens Room 101
    printf("Master key reveals: %d\n", **master_key); // Output: 10

    // What if we make a key point nowhere?
    key1 = NULL;
    if (key1 == NULL) {
        printf("Oops! key1 is broken (NULL).\n");
    }
    return 0;
}