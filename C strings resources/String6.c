#include <stdio.h>

int main() {
    char str1[] = "Oyster";  
    char *str2 = "Kode";     

    str1[0] = 'M';  
    str2[0] = 'C';  

    printf("%s %s\n", str1, str2);
    return 0;
}