#include <stdio.h>
#include <string.h>

int main() {
    char str[20] = "Oyster";
    printf("Length: %lu\n", strlen(str));

    str[3] = '\0';  
    printf("New Length: %lu\n", strlen(str));  

    return 0;
}