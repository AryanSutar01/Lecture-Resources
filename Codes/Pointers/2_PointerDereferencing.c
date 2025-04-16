#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num; 

    printf("Address of num: %p\n", &num);
    printf("Address stored in pointer: %p\n", ptr);
    
    /*
    printf("Value of num: %d\n", num);
    printf("Value of num using pointer: %d\n", *ptr);
    
    *ptr = 20;
    printf("Modified value of num: %d\n", num);
    */

    return 0;
}