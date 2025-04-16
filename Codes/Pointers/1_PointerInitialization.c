#include<stdio.h>

int main() {
    int a = 10;
    int *ptr = &a;
    
    char c = 'a';
    char *cptr = &c;

    float f = 3.14f;
    float *fptr = &f;

    double d = 2.71828;
    double *dptr = &d;

    printf("Integer value: %d, Pointer to Integer: %p\n", a, ptr);
    printf("Character value: %c, Pointer to Character: %p\n", c, cptr);
    printf("Float value: %.2f, Pointer to Float: %p\n", f, fptr);
    printf("Double value: %.5f, Pointer to Double: %p\n", d, dptr);
    printf("\n");
    printf("Size of int pointer: %zu bytes\n", sizeof(ptr));
    printf("Size of char pointer: %zu bytes\n", sizeof(cptr));
    printf("Size of float pointer: %zu bytes\n", sizeof(fptr));
    printf("Size of double pointer: %zu bytes\n", sizeof(dptr));
    printf("\n");
    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of char: %zu bytes\n", sizeof(c));
    printf("Size of float: %zu bytes\n", sizeof(f));
    printf("Size of double: %zu bytes\n", sizeof(d));
    printf("Size of pointer: %zu bytes\n", sizeof(int*));
      
    return 0;
}