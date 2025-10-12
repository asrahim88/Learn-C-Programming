#include <stdio.h>

int main()
{
    int x = 5;
    int y = 4;
    
    if(x>=y && x < y + 4) {
        if (y < 5) {
            printf("Hi ");
        }
        else if (y <10){
            printf("Hi ");
        }
    }else {
        printf("Hello ");
    }
    
    return 0;
}