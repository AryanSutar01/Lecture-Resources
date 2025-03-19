#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Kodeer";
    char str2[] = "Oyster";

    if (strcmp(str1, str2) == 0)
        printf("Strings are equal.\n");
    else
        printf("Strings are different.\n");  


    printf("%d", strcmp(str1, str2));
    return 0;
}