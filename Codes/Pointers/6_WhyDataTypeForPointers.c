#include <stdio.h>
#include <stdbool.h>

int main()
{
    int x = 6025;            
    int *ptr = &x;           
    char *cptr = (char *)&x; 
    bool *bptr = (bool *)&x;

    printf("%d\n", *ptr);    
    printf("%d\n", *cptr);   
    printf("%d\n", *bptr);
    
    return 0;
}