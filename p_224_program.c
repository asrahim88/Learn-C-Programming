#include <stdio.h>

int main()
{
    int x = 0;
    
    if (x==1) {
        if(x==0) {
            printf("Inside if if\n");
        }else {
            printf("Inside if else\n");
        }
    }
    else {
        printf("Inside else\n");
    }
    
    
    return 0;
}