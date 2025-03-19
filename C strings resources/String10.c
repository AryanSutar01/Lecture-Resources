#include <stdio.h>
#include <string.h>

int main() {
    
    char str1[20] = "Oyster";
    char str2[] = "Kode";

    strcat(str1, str2);  
    printf("Concatenated string: %s\n", str1);  

    return 0;
}