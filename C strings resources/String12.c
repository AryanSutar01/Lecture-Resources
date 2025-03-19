#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello, OysterKode!";
    
    char *pos1 = strchr(str, 's');  
    char *pos2 = strstr(str, "Kode");  

    printf("First 's' at: %s\n", pos1);  
    printf("Found substring: %s\n", pos2);  

    return 0;
}