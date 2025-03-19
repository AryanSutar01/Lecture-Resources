#include<stdio.h>

int main() {

    char name[] = {'O','Y','E','S','T','E','R',' ','K','O','D','E'};
    printf("%s",name);

    char name2[] = {'O','Y','E','S','T','E','R',' ','K','O','D','E','\0'};
    printf("\n%s",name2);

    char name3[] = "OYSTER KODE"; 
    printf("\n%s",name3);
    
    return 0;
}