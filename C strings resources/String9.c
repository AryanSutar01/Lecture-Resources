#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "OysterKode";
    char str2[20];

    printf("Length of str1: %lu\n", strlen(str1)); 

    strcpy(str2, str1);  
    printf("Copied string: %s\n", str2);  

    
    char str3[] = "CodeToChange";
    
    strncpy(str2, str3, 4);
    printf("Copied string: %s\n", str2);
    
    return 0;
    
}